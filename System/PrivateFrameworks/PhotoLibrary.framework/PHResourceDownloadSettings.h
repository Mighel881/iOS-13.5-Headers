/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PHSettings.h>

@interface PHResourceDownloadSettings : PHSettings {

	BOOL _simulateDownload;
	BOOL _simulateDownloadFailure;

}

@property (assign,nonatomic) BOOL simulateDownload;                     //@synthesize simulateDownload=_simulateDownload - In the implementation block
@property (assign,nonatomic) BOOL simulateDownloadFailure;              //@synthesize simulateDownloadFailure=_simulateDownloadFailure - In the implementation block
+(id)sharedSettings;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)simulateDownload;
-(void)setSimulateDownload:(BOOL)arg1 ;
-(BOOL)simulateDownloadFailure;
-(void)setSimulateDownloadFailure:(BOOL)arg1 ;
@end

