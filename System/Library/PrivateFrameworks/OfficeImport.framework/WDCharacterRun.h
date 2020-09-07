/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {

	NSMutableString* mString;
	BOOL mBinaryWriterContentFlag;

}
-(id)string;
-(id)description;
-(BOOL)isEmpty;
-(void)appendString:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(void)copyPropertiesFrom:(id)arg1 ;
-(int)runType;
-(BOOL)binaryWriterContentFlag;
-(void)setBinaryWriterContentFlag:(BOOL)arg1 ;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(void)setPropertiesForDocument;
-(void)clearString;
-(id)initWithParagraph:(id)arg1 string:(id)arg2 ;
@end
