/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookDataStore/BCCloudData.h>
#import <libobjc.A.dylib/BCCollectionDetail.h>
@class NSString;


@protocol BCCollectionDetail <BCCloudData>
@property (nonatomic,copy,readonly) NSString * collectionID; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * collectionDescription; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) int sortMode; 
@required
-(NSString *)name;
-(BOOL)hidden;
-(int)sortOrder;
-(NSString *)collectionID;
-(NSString *)collectionDescription;
-(int)sortMode;

@end


@class NSString, NSDate, CKRecord, NSData;

@interface BCCollectionDetail : BCCloudData <BCCollectionDetail>

@property (nonatomic,copy) NSString * collectionID; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * collectionDescription; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) int sortOrder; 
@property (assign,nonatomic) int sortMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
+(id)propertyIDKey;
-(NSString *)debugDescription;
-(id)mutableCopy;
-(id)identifier;
-(id)recordType;
-(id)zoneName;
-(void)_configureFromCollectionDetail:(id)arg1 withMergers:(id)arg2 ;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
@end

