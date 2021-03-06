//
//  Module2.h
//  Runner
//
//  Created by foxsofter on 2020/2/23.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <thrio/Thrio.h>

NS_ASSUME_NONNULL_BEGIN

@interface Module2 : ThrioModule<ThrioModuleRouteObserver,
                                 NavigatorRouteObserverProtocol>

@end

NS_ASSUME_NONNULL_END
