/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLCloudDeletable <NSObject>
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
@required
+(long long)cloudDeletionTypeForTombstone:(id)arg1;
+(id)cloudUUIDKeyForDeletion;
-(long long)cloudDeletionType;
-(short)cloudDeleteState;
-(void)setCloudDeleteState:(short)arg1;
-(NSString *)cloudUUIDForDeletion;

@end

