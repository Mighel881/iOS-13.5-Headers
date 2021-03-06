/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>

@class NSString, INObject, CLPlacemark, NSNumber;

@interface EKUICreateEventIntent : INIntent

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) INObject * startDate; 
@property (nonatomic,copy) INObject * endDate; 
@property (nonatomic,copy) NSString * locationName; 
@property (nonatomic,copy) CLPlacemark * geolocation; 
@property (nonatomic,copy) NSString * locationAddress; 
@property (nonatomic,copy) NSNumber * allDay; 
@end

