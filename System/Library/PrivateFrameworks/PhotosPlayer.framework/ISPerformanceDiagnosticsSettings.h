/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@interface ISPerformanceDiagnosticsSettings : ISSettings {

	BOOL _shouldTracePerformance;

}

@property (assign,nonatomic) BOOL shouldTracePerformance;              //@synthesize shouldTracePerformance=_shouldTracePerformance - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)shouldTracePerformance;
-(void)setShouldTracePerformance:(BOOL)arg1 ;
@end
