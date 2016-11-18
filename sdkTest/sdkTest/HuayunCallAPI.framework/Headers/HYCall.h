//
//  HYCall.h
//  HuayunCallAPI
//
//  Created by 华云天下 on 16/11/17.
//  Copyright © 2016年 huayunworld. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HYCall;
@protocol HYCallDelegate <NSObject>

/**
 @param error 初始化SDK错误信息
 */
-(void)initializeSDKError:(NSError *)error;

@end
@interface HYCall : NSObject
/**
 代理
 */
@property (nonatomic,weak) id<HYCallDelegate> delegate;

/**
 @return 单例
 */
+(instancetype)shareCall;
/**
 初始化SDK
 
 @param client_id 在开发平台注册后生成的 Client ID
 @param secret    在开发平台注册后生成的 Client Secret
 */
-(void)initializeSDKWithClientID:(NSString *)client_id andClientSecret:(NSString *)secret;
@end
