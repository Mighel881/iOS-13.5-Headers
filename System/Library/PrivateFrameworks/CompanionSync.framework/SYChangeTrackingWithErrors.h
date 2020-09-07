/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SYChangeTrackingWithErrors <SYChangeTracking>
@required
-(BOOL)deleteObject:(id)arg1 error:(id*)arg2;
-(BOOL)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
-(BOOL)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
-(BOOL)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
-(BOOL)addObject:(id)arg1 error:(id*)arg2;
-(BOOL)updateObject:(id)arg1 error:(id*)arg2;

@end
