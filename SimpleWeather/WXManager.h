//
//  WXManager.h
//  SimpleWeather
//
//  Created by Clare Reid on 27/03/2014.
//  Copyright (c) 2014 Shanarelle. All rights reserved.
//

#import <Foundation/Foundation.h>
@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>
// 1
#import "WXCondition.h"

@interface WXManager : NSObject
<CLLocationManagerDelegate>

// 2
+ (instancetype)sharedManager;

// 3
@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

// 4
- (void)findCurrentLocation;

@end
