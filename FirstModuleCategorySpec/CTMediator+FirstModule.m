//
//  CTMediator+FirstModule.m
//  FirstModuleCategory
//
//  Created by lihaifeng on 2020/6/28.
//  Copyright © 2020 lihaifeng. All rights reserved.
//

#import "CTMediator+FirstModule.h"

@implementation CTMediator (FirstModule)

- (UIViewController *)moduleFirstController{
    return [self performTarget:@"FirstModule" action:@"viewController" params:nil shouldCacheTarget:NO];
}

- (UIViewController *)moduleFirstControllerWithInfo:(NSDictionary *)param{
    return [self performTarget:@"FirstModule" action:@"viewController" params:param shouldCacheTarget:NO];
}

- (UIViewController *)moduleFirstControllerWithInfo:(NSDictionary *)param callBack:(void (^)(NSString * _Nonnull))callBack{
    NSMutableDictionary *dict = [NSMutableDictionary dictionaryWithDictionary:param];
    [dict setObject:callBack forKey:@"block"];
    return [self performTarget:@"FirstModule" action:@"viewController" params:dict shouldCacheTarget:NO];
}

@end
