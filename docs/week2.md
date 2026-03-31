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
* 使用搜索引擎 / GitHub Issues / ai 查找解决方案
* 一些可能可以找到问题解决方案的社区：
  
  * [stack overflow](https://stackoverflow.com/)
     （注意：使用bing和国内搜索引擎无法搜到相关记录）
  * [reddit](https://www.reddit.com/)
  * zhihu和csdn等
* 检查依赖是否完整（requirements.txt / pyproject.toml）
* 查看报错信息并定位关键异常（查看python报错栈信息）
* 常见问题类型：

  * 依赖缺失（依赖版本不同等）
  * Python 版本不匹配（所以要使用虚拟环境，可以更便捷地切换Python及相关依赖版本）
  * 环境变量未配置（查看环境变量）
  * 端口冲突（查看端口号）

需要注意：树莓派上面编译qt很慢，所以pyqt不指定版本，同样的如果遇到需要编译的相关依赖，最好再本机上编译完，再拷贝或者安装到树莓派上面。

---

### 2. py-xiaozhi项目目录讲解(主要讲解src目录)

* 结构组成（可以对比一下原来的项目和我们修改后的项目）
* 类似项目常见框架结构（如 Flask / Django / fastapi）
* 各目录职责与作用划分

Optimizing tool selection...从项目目录结构来看，这是一个多模块的 Python 项目，包含多个功能模块和相关资源。以下是对目录结构的讲解：

### 根目录
- **authorize_python_access.sh**: 可能是一个脚本，用于授权 Python 访问某些资源。
- **build.json**: 构建配置文件，可能定义了项目的构建流程。
- **checke_opus.sh**: 检查 Opus 音频库的脚本。
- **entitlements.plist**: 可能是 macOS 的权限配置文件。
- **format_code.bat / format_code.sh**: 用于格式化代码的脚本，分别适用于 Windows 和 Linux/macOS。
- **LICENSE**: 项目的开源许可证。
- **main.py**: 项目的主入口文件。
- **pyproject.toml**: Python 项目的配置文件，通常用于定义依赖和工具。
- **README.md / README.en.md**: 项目的说明文档，分别是中文和英文版本。
- **requirements.txt / requirements_mac.txt**: Python 的依赖文件，分别适用于通用环境和 macOS。

---

### 主要目录
#### **assets**
- 存放资源文件，例如 `emojis/` 可能包含表情符号相关的资源。

#### **documents**
- 包含文档相关的内容，可能是项目的开发文档或用户指南。
  - **`index.ts`**: TypeScript 文件，可能是文档的入口。
  - **`docs/`**: 文档的子目录，包含多个主题的文档，例如：
    - **`guide/`**: 指南文档，包含配置说明、设备激活流程等。
    - **`iot/`**: IoT（物联网）相关文档。
    - **`mcp/`**: MCP（某种协议或平台）相关文档。
    - **`sponsors/`**: 赞助商相关信息。

#### **libs**
- 存放项目依赖的库文件。
  - **`libopus/`**: Opus 音频库的不同平台版本。
  - **`webrtc_apm/`**: WebRTC 音频处理模块，包含不同平台的实现。

#### **scripts**
- 存放各种脚本文件，可能用于工具或测试。
  - 例如：`calendar_query.py`（日历查询）、`music_cache_scanner.py`（音乐缓存扫描）。

#### **src**
- 项目的主要源代码目录，包含多个模块：
  - **`application.py`**: 应用程序的入口或核心逻辑。
  - **`audio_codecs/`**: 音频编解码相关模块。
  - **`audio_processing/`**: 音频处理模块，例如唤醒词检测。
  - **`constants/`**: 常量定义模块。
  - **`core/`**: 核心功能模块，例如 OTA 更新。
  - **`display/`**: 显示相关模块，支持 CLI 和 GUI。
  - **`iot/`**: IoT 设备管理模块。
  - **`mcp/`**: MCP 服务器相关模块。
  - **`network/`**: 网络通信模块，例如 MQTT 客户端。
  - **`plugins/`**: 插件模块，支持扩展功能。
  - **`protocols/`**: 通信协议模块。
  - **`utils/`**: 工具模块，提供通用功能。
  - **`views/`**: 视图模块，可能用于前端或界面展示。

---

### 总结
这个项目是一个功能丰富的 Python 应用，支持音频处理、物联网、网络通信等功能。目录结构清晰，模块化设计便于维护和扩展。

---

### 3. Python 项目运行与调试

* 创建与使用虚拟环境（venv / conda / uv）
* 安装依赖：（先进到虚拟环境再安装）

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
