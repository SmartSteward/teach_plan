
# Week4

# 教学内容

## 第4周:home assistant的使用

### 1.搭建home assistant及基础配置

(1)搭建home assistant，创建自己的账号  
<https://post.smzdm.com/p/a309g7gn/>(步骤五之后可以不看)  
项目的ha地址：192.168.235.201:8123  
用户名：nininini  
密码：nininini  
(2)基础配置  
  - 仪表盘：设置-仪表盘-新建仪表盘
  - 应用：设置-应用-安装应用-右上角添加仓库（<https://gitee.com/hacs-china/addons>）  
    - 安装以下应用：
      - `file-editor` (文件编辑器)
      - `Filebrowser` (文件浏览器)
      - `HA常用卡片`
      - `Mosquitto broker (aliyun)` (MQTT代理)
      - `HACS` (home assistant社区商店)
    - HACS需要手动安装
      - Filebrowser里home assistant是根目录，所有关于文件的操作都在这个文件夹里
      - 将hacs解压后上传到根目录（home assistant）的custom_components文件夹中，如果没有这个文件夹，新建一个
      - 重启homeassistant后，集成才能生效
      - 可以参考(<https://blog.csdn.net/A15130402745/article/details/144989294>)


### 2.3D房屋模型搭建

使用的软件：酷家乐，PS  
(1)酷家乐的使用  
步骤：绘制墙体-放家具-渲染  
一些注意事项
- 摆放灯-右侧设置离楼板的距离，要不然就会放在地面上
- 摆放家具一定是找素材里面，不要用画户型里的
- 设置相机视角
- 点击渲染才能看到效果图
- 灯光的亮度在右边调整  

(2)添加辅助元素  
(3)PS的使用  
<https://post.smzdm.com/p/aovleg59/>   
(可以抠一个房屋去掉背景的图作为全暗)  
icon(<https://pictogrammers.com/library/mdi/>)
```
type: picture-elements
image: /local/home/全暗5.png
elements:
  - type: image
    entity: switch.ke_ting_deng
    tap_action:
      action: none
    style:
      pointer-events: none
      top: 50%
      left: 50%
      width: 100%
      mix_blend_mode: lighten
    state_image:
      "off": /local/home/透明.png
      "on": /local/home/客厅.png
  - type: state-icon
    entity: switch.ke_ting_deng
    icon: mdi:ceiling-light
    style:
      top: 60%
      left: 40%
    tap_action:
      action: toggle
    hold_action:
      action: more-info
```


### 3.整体布局
(1)天气卡片配置 
1. hacs里搜索`彩云天气`并下载卡片与集成
2. 添加集成里搜索`天气预报`并添加 
3. 仪表盘里卡片配置`weather.guangzhou`  

(2)连接MQTT   
1. 添加集成里搜索`MQTT`并添加 
2. 配置MQTT  
   - MQTT服务端地址：znjj.piedaochuan.top
   - 端口：1883  
    
3. 编辑/homeassistant/configuration.yaml
4. 编辑/homeassistant/automations.yaml

(3)全屏  
1. 创建辅助元素-开关-名称`kiosk_mode`，会生成实体“input_boolean.kiosk_mode”  
2. 编辑仪表盘
  ```
  kiosk_mode:
  entity_settings:
    - entity:
        input_boolean.kiosk_mode: 'on'
      hide_header: true
      hide_sidebar: true
    - entity:
        input_boolean.kiosk_mode: 'off'
      hide_header: false
      hide_sidebar: false
  ```
(4)布局设计
- 垂直堆叠
- 磁贴
