/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol SSBookDownloadQueue <NSObject>
@property (nonatomic,readonly) NSArray * downloads; 
@required
+(id*)sharedInstance;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(NSArray *)downloads;
-(void)cancelDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)pauseDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resumeDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addDownloadWithPurchaseParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3;
-(void)addDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addRestoreDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelAllActiveDownloadsWithCompletion:(/*^block*/id)arg1;
-(void)addDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;

@end
