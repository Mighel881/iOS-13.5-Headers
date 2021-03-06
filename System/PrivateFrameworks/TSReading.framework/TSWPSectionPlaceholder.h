/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>
#import <TSReading/TSKDocumentObject.h>
#import <TSReading/TSWPSection.h>

@class TPDocumentRoot, TSWPStorage;

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection> {

	TPDocumentRoot* _documentRoot;
	TSWPStorage* _parentStorage;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)parentStorage;
-(void)setParentStorage:(id)arg1 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 ;
@end

