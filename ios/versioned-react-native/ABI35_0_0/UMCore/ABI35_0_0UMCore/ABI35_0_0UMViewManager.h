// Copyright © 2018 650 Industries. All rights reserved.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <ABI35_0_0UMCore/ABI35_0_0UMExportedModule.h>

@interface ABI35_0_0UMViewManager : ABI35_0_0UMExportedModule

- (UIView *)view;
- (NSString *)viewName;
- (NSArray<NSString *> *)supportedEvents;

- (NSDictionary<NSString *, NSString *> *)getPropsNames;
- (void)updateProp:(NSString *)propName withValue:(id)value onView:(UIView *)view;

@end
