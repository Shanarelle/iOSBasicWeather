//
//  WXDailyForecast.m
//  SimpleWeather
//
//  Created by Clare Reid on 27/03/2014.
//  Copyright (c) 2014 Shanarelle. All rights reserved.
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast

//account for different naming conventions in source
+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    // 1
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
    // 2
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";
    // 3
    return paths;
}
@end
