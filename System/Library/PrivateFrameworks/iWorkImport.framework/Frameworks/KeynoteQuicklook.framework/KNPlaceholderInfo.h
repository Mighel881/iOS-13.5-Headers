/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSReading/TSWPShapeInfo.h>

@interface KNPlaceholderInfo : TSWPShapeInfo
+(Class)classForUnarchiver:(id)arg1 ;
-(BOOL)isEmpty;
-(int)kind;
-(Class)layoutClass;
-(Class)repClass;
-(BOOL)displaysInstructionalText;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(BOOL)shouldHideEmptyBullets;
-(void)loadFromArchive:(const PlaceholderArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(PlaceholderArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyAsShapeInfoWithContext:(id)arg1 ;
-(BOOL)isAllowedInGroups;
-(id)defaultInstructionalText;
-(BOOL)remainsInDocumentWhenDeletedFromChildInfos;
@end

