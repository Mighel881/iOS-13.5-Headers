/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIIndexBarControlDataSource <NSObject>
@optional
-(id)combinedEntryForIndexBarControl:(id)arg1;
-(long long)numberOfSectionsInIndexBarControl:(id)arg1;

@required
-(long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2;
-(id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2;

@end
