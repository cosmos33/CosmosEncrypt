//
//  CosmosEncrypt.h
//  MMEncrypt
//
//  Created by wangxuefei on 2019/12/16.
//  Copyright © 2019 MOMO. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CosmosEncrypt : NSObject

/** 如果传入非nsstring对象，返回@"" */
+ (NSString *)encryptWithId:(NSString *)appid string:(NSString *)encodeStr;

/** 如果传入非nsstring对象，返回@"" */
+ (NSString *)decryptWithId:(NSString *)appid string:(NSString *)encodeStr;
@end

NS_ASSUME_NONNULL_END
