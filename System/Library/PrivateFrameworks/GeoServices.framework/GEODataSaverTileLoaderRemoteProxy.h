/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODataSaverTileLoaderProxy.h>

@class NSString;

@interface GEODataSaverTileLoaderRemoteProxy : NSObject <GEODataSaverTileLoaderProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDataSaverEnabled,nonatomic,readonly) BOOL dataSaverEnabled; 
-(BOOL)isDataSaverEnabled;
-(void)_debug_initiateDataSaverPreload;
@end

