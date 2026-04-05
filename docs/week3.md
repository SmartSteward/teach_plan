# Week3

## 教学内容

### 第二周补充内容：代码常用工具，py-xiaozhi调试

**以python为例说明**

- 静态代码分析工具 Flake8 Pylint
- 代码生成工具（脚手架） STM32CubeMX
- 解释器 CPython
- 调试器 pdb debugpy
- 代码测试工具 pytest
- 代码格式化工具 Black
- 打包发布工具 setuptools
- 构建工具 Make CMake
- 依赖管理 pip


- 项目管理器 uv
- 语言服务器 pylance

**py-xiaozhi调试：**

1. 调用堆栈的查看
2. 变量查看（表达式查看）****
3. 断点，条件断点，异常断点
4. debug console执行python代码


### 第3周：STM32Cube 的使用以及 STM32 项目讲解

#### 1. STM32Cube 的使用

**（1）工具介绍**

* STM32CubeMX

  * 图形化配置工具，用于：

    * 引脚分配（GPIO）
    * 外设配置（UART / SPI / I2C / ADC 等）
    * 时钟树配置
  * 自动生成初始化代码

* STM32CubeIDE

  * 集成开发环境（IDE）
  * 内置编译器、调试器、代码编辑器

**（2）基本使用流程**

1. 新建工程（选择芯片型号或开发板）
2. 配置时钟（Clock Configuration）
3. 配置外设（如 GPIO / USART）
4. 生成代码（Generate Code）
5. 在 IDE 中编写用户逻辑（`while(1)` 主循环）

**（3）代码结构讲解（重点）**

* `main.c`

  * `HAL_Init()`：初始化 HAL 库
  * `SystemClock_Config()`：时钟配置
  * `MX_GPIO_Init()` / `MX_USARTx_Init()`：外设初始化
  * `while (1)`：主循环

* `stm32xx_hal_*.c`

  * HAL 驱动实现（不要修改）

* `Core/Src` & `Core/Inc`

  * 用户代码区

* `/* USER CODE BEGIN */`

  * 用户可修改区域（不会被代码生成覆盖）




#### 2. STM32 项目讲解

**（1）一个典型项目结构**

```
project/
├── Core/
│   ├── Inc/
│   └── Src/
├── Drivers/
│   ├── CMSIS/
│   └── STM32_HAL_Driver/
├── Middlewares/
├── .ioc
└── ...
```
**（2）一些需要了解的基础文件**

1. CMakeLists.txt
2. CMakePresets.json
3. .gitignore
4. .clangd

**（2）开发流程**

1. 使用 CubeMX 生成工程
2. 编写驱动逻辑（GPIO / 串口 / 传感器）
3. 编写应用逻辑（状态机 / 任务调度）
4. 调试（串口日志 / 断点）
5. 烧录运行


#### 3. GitHub 相关操作

**（1）基础概念**

* GitHub

  * 代码托管平台

* 核心术语：

  * Repository（仓库）
  * Commit（提交）
  * Branch（分支）

**（2）Fork & PR 工作流（重点）**

1. Fork 别人的仓库（复制到自己账号）
2. Clone 到本地
3. 新建分支开发
4. 提交代码（commit）
5. 推送到自己的仓库
6. 发起 Pull Request（PR）


**（3）PR 注意事项**

* 描述清晰（做了什么 + 为什么）
* 小步提交（不要一次改太多）
  对于自己本地的每一次commit也是同理
* 遵守项目代码规范

## 验收内容

* 使用 STM32CubeMX 创建一个项目：

  * 点亮 LED（GPIO）
  * 串口输出 "Hello STM32"
  * 在组织里创建相应的项目起名 github用户名_stm32hello 并讲代码提交到仓库。
