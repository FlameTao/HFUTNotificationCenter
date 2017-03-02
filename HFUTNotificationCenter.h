//
//  HFUTNotificationCenter.h
//  HfutXC
//
//  Created by Flame on 2017/3/2.
//  Copyright © 2017年 HFUTStudio. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, NotificationType) {
    HFUTNotificationDefault,
    HFUTNotificationSuccess,
    HFUTNotificationError,
    HFUTNotificationInfo
};

@interface HFUTNotificationCenter : UIViewController

+ (HFUTNotificationCenter*)notificationWithTitle:(NSString*)title Type:(NotificationType)type;

@property (nonatomic, strong) UIWindow *window;
@property (nonatomic, strong) UIView *bacgroundView;
@property (nonatomic, strong) UIImageView *markView;
@property (nonatomic, strong) UILabel *notificationMessage;

- (void)show;
- (void)destroy;
@end
