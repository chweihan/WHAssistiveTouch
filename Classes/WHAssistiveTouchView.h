//
//  WHAssistiveTouchView.h
//  WHAssistiveTouch
//
//  Created by 陈伟涵 on 2017/10/25.
//  Copyright © 2017年 cweihan. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 消息显示\隐藏的动画时间 */
static CGFloat LSDAnimationDuration = 0.25;
/** 消息显示\隐藏的动画时间 */
static CGFloat LSDAssistiveViewHeight = 100;

@class WHAssistiveTouchView;

@protocol WHAssistiveTouchViewDelegate <NSObject>

- (void)assistiveTouchViewDidClick:(WHAssistiveTouchView *)assistiveTouchView;

@end

@interface WHAssistiveTouchView : UIView

+ (void)hide;

+ (instancetype)shareInstance;

@property (nonatomic, weak) id<WHAssistiveTouchViewDelegate> delegate;

@end
