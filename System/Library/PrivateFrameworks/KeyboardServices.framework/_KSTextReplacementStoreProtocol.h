/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _KSTextReplacementStoreProtocol <NSObject>
@required
-(void)removeAllEntries;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1;
-(id)textReplacementEntries;

@end

