/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFPageRangePrivate;

@interface PDFPageRange : NSObject {

	PDFPageRangePrivate* _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)page;
-(void)setPage:(id)arg1 ;
-(id)initWithPage:(id)arg1 range:(NSRange)arg2 ;
@end

