# HFUTNotificationCenter

顶部弹出通知消息

## 演示

<img src="https://github.com/FlameTao/MarkdownRes/blob/master/notification.gif" />

## 使用

直接下载项目拖入工程

* 首先导入头文件

  ```objective-c
  #import "HFUTNotificationCenter.h"
  ```

* 创建一个实例

  ```objective-c
  HFUTNotificationCenter *notification = [HFUTNotificationCenter notificationWithTitle:@"今天不上学真开心呀" Type:HFUTNotificationSuccess];
  ```

* 弹出消息框

  ```objective-c
  [notification show];
  ```

Type可以目前有四种：

* HFUTNotificationDefault （不带图片）
* HFUTNotificationSuccess
* HFUTNotificationError
* HFUTNotificationInfo