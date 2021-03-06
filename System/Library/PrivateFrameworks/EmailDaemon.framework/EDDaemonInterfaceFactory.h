/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDPersistence, EDCategorySubsystem;

@interface EDDaemonInterfaceFactory : NSObject {

	EDPersistence* _persistence;
	EDCategorySubsystem* _categorySubsystem;

}

@property (nonatomic,retain) EDCategorySubsystem * categorySubsystem;              //@synthesize categorySubsystem=_categorySubsystem - In the implementation block
@property (nonatomic,readonly) EDPersistence * persistence;                        //@synthesize persistence=_persistence - In the implementation block
-(EDPersistence *)persistence;
-(id)newFetchController;
-(EDCategorySubsystem *)categorySubsystem;
-(id)initWithPersistence:(id)arg1 categorySubsystem:(id)arg2 ;
-(id)newAccountRepository;
-(id)newMailboxRepository;
-(id)newMessageRepositoryWithResumable:(id)arg1 ;
-(id)newOutgoingMessageRepository;
-(id)newSearchableIndex;
-(id)sharedInteractionLogger;
-(id)sharedDonationController;
-(id)newVIPManagerInterface;
-(id)newActivityRegistry;
-(id)newClientResumerWithForegroundReporter:(id)arg1 ;
-(void)setCategorySubsystem:(EDCategorySubsystem *)arg1 ;
@end

