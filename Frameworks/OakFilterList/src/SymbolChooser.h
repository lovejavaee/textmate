#import "OakChooser.h"
#import <document/OakDocument.h>

PUBLIC @interface SymbolChooser : OakChooser
@property (class, readonly) SymbolChooser* sharedInstance;

@property (nonatomic) OakDocument* TMDocument;
@property (nonatomic) NSString* selectionString;@end
