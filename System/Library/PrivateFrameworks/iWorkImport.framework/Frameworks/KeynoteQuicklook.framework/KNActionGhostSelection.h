/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSReading/TSKSelection.h>

@interface KNActionGhostSelection : TSKSelection
+(Class)archivedSelectionClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)saveToArchive:(ActionGhostSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ActionGhostSelectionArchive*)arg1 unarchiver:(id)arg2 ;
@end

