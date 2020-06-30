//
//  CTMediator+FirstModule.h
//  FirstModuleCategory
//
//  Created by lihaifeng on 2020/6/28.
//  Copyright © 2020 lihaifeng. All rights reserved.
//

#import <CTMediator/CTMediator.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (FirstModule)

- (UIViewController *)moduleFirstController;

- (UIViewController *)moduleFirstControllerWithInfo:(NSDictionary *)param;

- (UIViewController *)moduleFirstControllerWithInfo:(NSDictionary *)param callBack:(void(^)(NSString *result))callBack;
// 外链/其他app打开FirstModule url格式： router://FirstModule/viewController？key1=value1&kye2=value2 其中的router:无意义 可以换其他任意字符
- (UIViewController *)moduleFirstControllerWithUrl:(NSURL *)url completion:(void(^_Nullable)(NSDictionary * _Nullable info))completion;

@end

NS_ASSUME_NONNULL_END
