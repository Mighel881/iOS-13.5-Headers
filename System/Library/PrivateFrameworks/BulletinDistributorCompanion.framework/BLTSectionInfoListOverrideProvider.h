/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTSectionInfoListOverrideProvider <BLTSectionInfoListProvider>
@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate; 
@required
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reloadWithCompletion:(/*^block*/id)arg1;

@end
