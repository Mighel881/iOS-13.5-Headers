/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHImageRequestDelegate <PHMediaRequestDelegate>
@required
-(void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(BOOL*)arg2 didFindImage:(BOOL*)arg3 resultHandler:(/*^block*/id)arg4;
-(void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(/*^block*/id)arg2;
-(BOOL)imageRequest:(id)arg1 isRequestingRepairAndRetryForDataStoreKey:(id)arg2 inStore:(id)arg3 assetObjectID:(id)arg4 forValidationErrors:(id)arg5;

@end
