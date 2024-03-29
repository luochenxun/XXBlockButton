//
//  LLBlockButton.h
//  kidme
//
//  Created by luochenxun on 15/8/12.
//  Copyright (c) 2015年 kacha-mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XXBlockButton;

typedef void (^LLBlockButtonBlock)(XXBlockButton *button);

@interface XXBlockButton : UIButton

@property(nonatomic, strong) LLBlockButtonBlock buttonBlock;
@property(nonatomic, strong) LLBlockButtonBlock touchBlock;

- (void)addTouchOnListenerWithBlock:(LLBlockButtonBlock)block;
- (void)addTouchEventListenerWithBlock:(LLBlockButtonBlock)block;

@end
