/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class NSString;

@interface SXMapItem : SXJSONObject

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) long long type; 
-(long long)type;
-(NSString *)label;
-(CLLocationCoordinate2D)coordinate;
@end

