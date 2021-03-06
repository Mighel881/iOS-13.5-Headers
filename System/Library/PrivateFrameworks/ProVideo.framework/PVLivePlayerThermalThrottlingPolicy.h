/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVLivePlayerThermalThrottlingPolicy : NSObject {

	HGSynchronizable* _lock;
	map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::__1::less<PVSPI_OSThermalPressureLevel>, std::__1::allocator<std::__1::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *> > >* _policy;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setThermalLevel:(int)arg1 controlParameters:(id)arg2 ;
-(id)populatedControlParametersForCurrentThermalLevel;
-(id)populatedControlParametersForThermalLevel:(int)arg1 ;
-(id)controlParametersForThermalLevel:(int)arg1 ;
@end

