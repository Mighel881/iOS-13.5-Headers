/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CALNIconCache <NSObject>
@required
-(BOOL)forceRemoveAllCachedIconsWithError:(id*)arg1;
-(BOOL)addIconsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)cachedIconPathForIconIdentifier:(id)arg1;
-(id)iconIdentifierForCachedIconPath:(id)arg1;
-(BOOL)removeIconWithIdentifier:(id)arg1 error:(id*)arg2;

@end

