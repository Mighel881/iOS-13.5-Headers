/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BLTAlertStateTester : NSObject {

	/*^block*/id _sectionInfoRetriever;

}

@property (nonatomic,copy) id sectionInfoRetriever;              //@synthesize sectionInfoRetriever=_sectionInfoRetriever - In the implementation block
-(BOOL)isScreenTimeBlockedForBundleIdentifier:(id)arg1 ignoresDowntime:(BOOL)arg2 ;
-(id)sectionInfoRetriever;
-(unsigned long long)_blockingReasonForSectionInfo:(id)arg1 ;
-(unsigned long long)willNanoPresentNotificationForSectionInfo:(id)arg1 subsectionIDs:(id)arg2 isWristDetectDisabled:(BOOL)arg3 hasSectionIDOptedOutOfCoordination:(BOOL)arg4 hasSectionIDOptedForwardOnly:(BOOL)arg5 ignoresDowntime:(BOOL)arg6 ;
-(void)setSectionInfoRetriever:(id)arg1 ;
@end

