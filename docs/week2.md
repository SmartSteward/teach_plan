# Week2

## 教学目标

* 理解开源项目常见问题的排查思路
* 掌握 Python Web 项目的基本目录结构
* 能够在本地或服务器上正确运行 Python 项目
* 掌握基本调试方法（日志、报错定位、断点思路）
* 能独立解决依赖、环境与运行相关问题

---

## 教学内容

### 1. 开源项目问题的常见解决方案

* 阅读项目 README 与文档
* 检查依赖是否完整（requirements.txt / pyproject.toml）
* 查看报错信息并定位关键异常
* 常见问题类型：

  * 依赖缺失
  * Python 版本不匹配
  * 环境变量未配置
  * 端口冲突
* 使用搜索引擎 / GitHub Issues 查找解决方案

---

### 2. Python Web 项目目录结构讲解

* 常见结构组成：

  * 主入口文件（如 app.py / main.py）
  * 配置文件（config.py / .env）
  * 依赖文件（requirements.txt）
  * 静态资源（static/）
  * 模板文件（templates/）
  * 应用模块（blueprint / app modules）
* 常见框架结构（如 Flask / Django）
* 各目录职责与作用划分

---

### 3. Python 项目运行与调试

* 创建与使用虚拟环境（venv / conda / uv）
* 安装依赖：

  * pip install -r requirements.txt
* 启动项目：

  * python main.py / flask run / uvicorn 等
* 常见运行问题处理：

  * ModuleNotFoundError
  * ImportError
  * 端口占用
* 基本调试方法：

  * print 调试
  * 日志输出（logging）
  * 逐步定位错误栈
* 使用 IDE 或编辑器进行断点调试（如 VSCode / PyCharm）

---

## 验收内容

* 能够成功运行一个 Python Web 项目（本地或服务器均可）
* 提供项目运行截图或日志输出证明
* 能解释项目的基本目录结构及各部分作用
* 记录并说明至少一个运行过程中遇到的问题及解决方法
* 使用虚拟环境完成依赖安装并运行项目
* 成功修改项目中的一处内容并验证生效（如接口返回或页面显示）
