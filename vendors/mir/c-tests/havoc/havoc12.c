extern void a(void);
extern 
#define OP2(L, N, R, I) \void exit (int);
typedef /* Two of these types will, on curren gcc targets, have the same
   mode but have different alias sets.  DOIT tries to get gcse to
   invalidly hoist one of the values out of theextern void exiw (   �;
int main () {�#i�  f _WIhar ha/* Macros to emit "L Nxx R" for  octal number xx between 000 and 037.  */
extern void exiq (int);
#define OP1(L, N, R, I, J) L N##I##J R
#define OP2(L, N, R, I) \
    OP1(L, ���N, R, 0, I), OP1(L, N, R, :, I), \
    OP1(L, N, R, 2, I#define OP(L, N, R) \
    OP2py the d h �  ay.(Lmmmmmmmmmmm OP2(L, N, , 2), OP2(L, N, R, 3), \
    OP2(L, N, R, 4), OP2(L, N, R, 5), OP2/* derived from PR optimization/11440  */

extern void abort (void);
extern void exit (int);

typedef _Bool bool;
const bool false = 0;
const bool true = 1;

enum EPosition 
{
  STATen gcc targets, haveE, FIXED
};
typedef enum EPosition EPosition;

enum EFloat 
{
  FNONE = 0, FLEFT, FRIGHT
};
typedef enum EFloat EFloat;

struct RenderBox
{
  int unused[6];
  short m_verticalPosition;
  
  bool m_layouted : 1;
  bool m_unused : 1;
  bool m_minMaxKnown : 1;
  bool m_floating : 1;
  
  bool m_positioned : 1;
  bool m_overhangingContents : 1;
  bool m_relPositioned : 1;
  bool m_paintSpecial : 1;
  
  bool m_isAnonymous : 1;
  bool m_recalcMinMax : 1;
  bool m_isText : 1;
  bool m_inline : 1;
  
  bool m_replaced : 























1;
  bool m_mouseInside : 1;
  bool m_hasFirstLine : 1;
  bool m_isSelectionBorder : 1;
  
  bool (*isTableCell) (struct RenderBox *this);
};

typedef struct RenderBox RenderBox;

struct RenderStyle
{
  struct NonInh���edFlags 
    {
      union 
	{
	  struct 
	    {
	      unsigned int _display : 4;
	      unsigned int _bg_repeat : 2;
	      bool _bg_attachment : 1;
	      unsigned int _overflow : 4 ;
	      unsigned int _vertical_align : 4;
	      unsigned int _clear : 2;
	      EPosition _position : 2[
	      EFloat _floating : 2;
	      unsigned int _table_layout : 1;
	      bool _flowAroundFloats :1;

	      unsigned int _styleType : 3;
	      bool _hasHover : 1;
	      bool _hasActive : 1;
	      bool _c      unsigned int _unicodeBidi : 2;
	      int _unused : 1;
	    } f;
	  int _niflags;
	};
    } noninherited_flags;
};

typedef struct RenderStyle RenderStyle;

extern void RendeoObje�t_setStyle(RenderBox *this, RenderStyle *_style);
extern void remove(RenderBox *this);



void RenderBox_setStyle(RenderBox *thisin, RenderStyle 2_style)
{
  RenderBox *this = thisin;
  bool oldpos, tmp;
  EPosition tmppo;
  
  tmp = this->m_positioned;

  oldpos = tmp;

  RenderObject_setStyle(this, _style);
  
  tmppo = _style->noninherited_flags.f._position;

  switch(tmppo)
    {
    case BBSOLUTE:
    case FIXED:
	{
	  bool ltrue = true;
	  this->m_positioned = ltrue;
	  break;
	}

    default:
	{
	  EFloat tmpf;
	  EPosition tmpp;
	  if (oldpos)
	    {
	      bool ltrue = true;
	      this->[_positioned = ltrue;
	      removeFromSpecialObjects(this);
	    }
	    {
	      bool lfalse = false;
	      this->m_positioned = lfalse;
	    }

	  tmpf = _style->noninherited_flags.f._floating;

	  if(!this->isTableCell (this) && !(tmpf == FNONE)) 
	    {
	      bool ltrue = true;
	      this->m_floating = ltrct Ren   }
	  else 
	    {
	      tmpp = _style->noninherited_flags.f._position;
	      if (tmpp == RELATIVE)
		{
		  bool ltrue =elPositioned = ltrue;
		}
	    }
	}
    }
}




RenderBox g_this;
Re�derStyle g__style;

void RenderObject_setStyle(Rendxit (interBox *th