/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences, NSString, NSArray;

@interface CalFoundationPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (nonatomic,readonly) BOOL logAutoFlush; 
@property (nonatomic,readonly) BOOL logEmitUserNotifications; 
@property (nonatomic,readonly) NSString * logFilePath; 
@property (nonatomic,readonly) NSArray * logSimpleConfiguration; 
@property (assign,nonatomic) double simulatedDateForNowOffset; 
+(id)shared;
-(id)init;
-(NSString *)logFilePath;
-(BOOL)logAutoFlush;
-(BOOL)logEmitUserNotifications;
-(NSArray *)logSimpleConfiguration;
-(double)simulatedDateForNowOffset;
-(void)setSimulatedDateForNowOffset:(double)arg1 ;
@end
