/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModel;

@interface gbtClassifier : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
+(id)urlOfModelInThisBundle;
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(MLModel *)model;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromPlugin_hour:(double)arg1 plugin_battery_level:(double)arg2 device_activity:(double)arg3 hour:(double)arg4 battery_level:(double)arg5 heuristic_bin:(double)arg6 plugin_location:(double)arg7 hour_bin_id:(double)arg8 time_from_plugin:(double)arg9 avg_dur:(double)arg10 cnt_dur:(double)arg11 error:(id*)arg12 ;
@end
