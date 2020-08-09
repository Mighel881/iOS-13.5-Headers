/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTMapServiceManager, RTMapItemProviderReverseGeocodeParameters, NSString;

@interface RTMapItemProviderReverseGeocode : NSObject <RTMapItemProvider> {

	RTMapServiceManager* _mapServiceManager;
	RTMapItemProviderReverseGeocodeParameters* _parameters;

}

@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                             //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) RTMapItemProviderReverseGeocodeParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTMapItemProviderReverseGeocodeParameters *)parameters;
-(void)setParameters:(RTMapItemProviderReverseGeocodeParameters *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 mapServiceManager:(id)arg2 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithMapServiceManager:(id)arg1 parameters:(id)arg2 ;
@end
