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

* 为了避免一些喜欢搞事情的人，疯狂弹框，可以在弹框动画前把用户交互关了，在动画结束后再打开，当然你也可以添加一些其他代码。比如一个点击一个button后弹框

  ```objective-c
  [notification setPreBlock:^{
      _btn.userInteractionEnabled = NO;
  }];
  [notification setAftBlock:^{
      _btn.userInteractionEnabled = YES;
   }];
  ```

  ​

* 弹出消息框

  ```objective-c
  [notification show];
  ```

Type可以目前有四种：

* HFUTNotificationDefault （不带图片）
* HFUTNotificationSuccess
* HFUTNotificationError
* HFUTNotificationInfo

### 更新说明

* 增加了设置动画开始前和结束后的Block
* 加了阴影效果
* 添加了点击或者上划手势结束通知显示

