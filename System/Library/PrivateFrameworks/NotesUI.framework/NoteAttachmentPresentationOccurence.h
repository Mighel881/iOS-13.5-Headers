/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString, NoteAttachmentPresentation, DOMHTMLElement;

@interface NoteAttachmentPresentationOccurence : NSObject <QLPreviewItem> {

	NoteAttachmentPresentation* _presentation;
	DOMHTMLElement* _element;

}

@property (nonatomic,readonly) NoteAttachmentPresentation * presentation;              //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,readonly) DOMHTMLElement * element;                               //@synthesize element=_element - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
-(id)init;
-(DOMHTMLElement *)element;
-(NoteAttachmentPresentation *)presentation;
-(NSURL *)previewItemURL;
-(id)initWithPresentation:(id)arg1 element:(id)arg2 ;
@end
