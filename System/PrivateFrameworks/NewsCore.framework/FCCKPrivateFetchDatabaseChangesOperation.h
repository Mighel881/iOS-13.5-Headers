/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class FCCKPrivateDatabaseServerChangeToken, NSArray;

@interface FCCKPrivateFetchDatabaseChangesOperation : FCCKPrivateDatabaseOperation {

	BOOL _resultMoreComing;
	FCCKPrivateDatabaseServerChangeToken* _previousServerChangeToken;
	/*^block*/id _fetchDatabaseChangesCompletionBlock;
	NSArray* _resultChangedZoneIDs;
	NSArray* _resultDeletedZoneIDs;
	FCCKPrivateDatabaseServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,retain) NSArray * resultChangedZoneIDs;                                              //@synthesize resultChangedZoneIDs=_resultChangedZoneIDs - In the implementation block
@property (nonatomic,retain) NSArray * resultDeletedZoneIDs;                                              //@synthesize resultDeletedZoneIDs=_resultDeletedZoneIDs - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabaseServerChangeToken * resultServerChangeToken;              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL resultMoreComing;                                                       //@synthesize resultMoreComing=_resultMoreComing - In the implementation block
@property (nonatomic,copy) FCCKPrivateDatabaseServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (nonatomic,copy) id fetchDatabaseChangesCompletionBlock;                                        //@synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock - In the implementation block
-(void)setPreviousServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(void)setFetchDatabaseChangesCompletionBlock:(id)arg1 ;
-(FCCKPrivateDatabaseServerChangeToken *)previousServerChangeToken;
-(id)fetchDatabaseChangesCompletionBlock;
-(void)setResultServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(FCCKPrivateDatabaseServerChangeToken *)resultServerChangeToken;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultMoreComing:(BOOL)arg1 ;
-(BOOL)resultMoreComing;
-(void)setResultChangedZoneIDs:(NSArray *)arg1 ;
-(void)setResultDeletedZoneIDs:(NSArray *)arg1 ;
-(NSArray *)resultChangedZoneIDs;
-(NSArray *)resultDeletedZoneIDs;
@end
