/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ProbeManagerDelegate <NSObject>
@optional
-(void)probeStatusUpdate:(id)arg1;
-(void)probeOutputFilePaths:(id)arg1 forDiagSessionUUID:(id)arg2;
-(void)serviceAdded:(id)arg1 type:(long long)arg2;
-(void)serviceUpdated:(id)arg1 type:(long long)arg2;
-(void)serviceRemoved:(id)arg1 type:(long long)arg2;
-(void)probeFactString:(id)arg1 module:(id)arg2 goIntoDiagnosing:(BOOL)arg3 run:(BOOL)arg4;

@end

