//
//  UITextField+Category.h
//  iOSAppProject
//
//  Created by zhangpeng on 2019/1/8.
//  Copyright © 2019 zhangpeng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef BOOL(^P_InputBlock)(NSString *inputCharacter);

@interface UITextField (Category)

#pragma mark - Limit

- (void)limitWithMaxLength:(NSInteger)maxLength
                inputBlock:(P_InputBlock)inputBlock
       inputFailedCallBack:(void(^)(void))inputFailedCallBack;

#pragma mark - Private

- (NSString *)primaryLanguage;

- (void)setPlaceholder:(NSString *)placeholder color:(UIColor *)color font:(UIFont *)font;

@end

NS_ASSUME_NONNULL_END