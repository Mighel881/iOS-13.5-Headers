/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOEnvironmentInfo.h>

@class NSMapTable, NSString;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {

	NSMapTable* _overrideURLs;
	NSString* _uuid;

}
-(BOOL)isActive;
-(id)dictionaryRepresentation;
-(void)save;
-(void)delete;
-(id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(void)makeActive;
-(void)updateWithURLs:(id)arg1 ;
-(id)overrideURLs;
@end
