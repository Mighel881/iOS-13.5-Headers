/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
#import <libobjc.A.dylib/WFWebPageProtocol.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol> {

	xmlDoc* xmlDocument;
	NSString* pageTitle;
	NSMutableDictionary* metaTagsLabeled;
	NSMutableArray* metaTagsUnlabeled;
	NSMutableArray* scriptBlocks;
	NSMutableArray* images;
	NSString* pageContent;
	NSMutableArray* links;
	BOOL hasFrameset;
	BOOL hasShortRefresh;

}
+(id)treeStripperWithXMLDocument:(xmlDoc*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)images;
-(id)URLString;
-(id)links;
-(id)pageTitle;
-(void)setPageTitle:(id)arg1 ;
-(id)pageContent;
-(id)initWithXMLDocument:(xmlDoc*)arg1 ;
-(void)setXMLDocument:(xmlDoc*)arg1 ;
-(void)strip;
-(void)processXMLDocument:(xmlDoc*)arg1 ;
-(id)processXMLDocument:(xmlDoc*)arg1 blockComments:(BOOL)arg2 ;
-(id)metaTagDescription;
-(id)metaTagKeywords;
-(id)metaTagsLabeled;
-(id)metaTagsUnlabeled;
-(id)scriptBlocks;
-(BOOL)hasFrameset;
-(BOOL)hasShortRefresh;
-(id)metaTagRating;
@end
