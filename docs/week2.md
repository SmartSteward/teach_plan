# Week2

## 教学目标

* 理解开源项目常见问题的排查思路
* 掌握 Python Web 项目的基本目录结构
* 能够在本地或服务器上正确运行 Python 项目
* 掌握基本调试方法（日志、报错定位、断点思路）
* 能独立解决依赖、环境与运行相关问题

---

## 教学内容（以py-xiaozhi项目为例）

### 1. 开源项目问题的常见解决方案

* 阅读项目 README 与文档
* 使用搜索引擎 / GitHub Issues / AI 查找解决方案
* 一些可能可以找到问题解决方案的社区：

  * [stack overflow](https://stackoverflow.com/)
    （注意：使用 Bing 和国内搜索引擎可能搜不到完整记录）
  * [reddit](https://www.reddit.com/)
  * Zhihu 和 CSDN 等
* 检查依赖是否完整（requirements.txt / pyproject.toml）
* 查看报错信息并定位关键异常（关注 Python 报错栈）
* 常见问题类型：

  * 依赖缺失（依赖版本不同等）
  * Python 版本不匹配（建议使用虚拟环境切换 Python 版本及依赖）
  * 环境变量未配置（检查 `.env` 或系统环境变量）
  * 端口冲突（检查端口占用情况）

* 注意：树莓派上编译 Qt 较慢，`pyqt` 可不强制指定版本。若遇到需要本地编译的依赖，建议先在性能更好的机器完成构建，再拷贝或安装到树莓派。

---

### 2. py-xiaozhi 项目目录讲解（重点：src）

* 结构组成（可以对比一下原来的项目和我们修改后的项目）
* 类似项目常见框架结构（如 Flask / Django / FastAPI）
* 各目录职责与作用划分

#### 根目录（示例）

* `main.py`：项目主入口
* `pyproject.toml` / `requirements.txt`：依赖与构建配置
* `README.md`：项目说明与使用文档
* `format_code.sh` / `format_code.bat`：代码格式化脚本
* `scripts/`：辅助脚本（初始化、检查、工具任务等）

---

#### 主要目录（示例）

* `src/`：核心业务代码目录
  * `application.py`：应用初始化与启动
  * `core/`：核心流程与服务编排
  * `network/`：网络通信（如 API / MQTT 客户端）
  * `audio_processing/`：音频处理能力
  * `plugins/`：插件扩展
  * `utils/`：通用工具函数
  * `views/` 或 `display/`：界面与展示相关
* `assets/`：静态资源
* `libs/`：第三方库或平台相关二进制依赖
* `documents/`：文档与说明资料


### 3. Python 项目运行与调试

* 创建与使用虚拟环境（venv / conda / uv）
* 安装依赖（先进入虚拟环境再安装）：

  * pip install -r requirements.txt
* 启动项目：

  * python main.py / flask run / uvicorn 等
* 常见运行问题处理：

  * ModuleNotFoundError
* 基本调试方法：

  * print 调试
  * 日志输出（logging）
  * 逐步定位错误栈
* 使用 IDE 或编辑器进行断点调试（如 VSCode / PyCharm）

---

## 验收内容

* 能解释项目的基本目录结构及各部分作用
* 记录并说明至少一个运行过程中遇到的问题及解决方法
* 使用虚拟环境完成依赖安装并运行项目
* 成功修改项目中的一处内容并验证生效（如接口返回或页面显示）

