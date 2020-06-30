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

@end

NS_ASSUME_NONNULL_END
