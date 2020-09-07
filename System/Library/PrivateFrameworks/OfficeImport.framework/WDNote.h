/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDText, WDCharacterRun;

@interface WDNote : WDRun {

	WDText* mText;
	WDCharacterRun* mReference;
	BOOL mAutomaticNumbering;

}
-(id)description;
-(id)text;
-(id)reference;
-(int)runType;
-(void)setAutomaticNumbering:(BOOL)arg1 ;
-(BOOL)automaticNumbering;
-(id)initWithParagraph:(id)arg1 footnote:(BOOL)arg2 ;
@end
