#ifndef _____OgreRenderWindowEditor_H
#define _____OgreRenderWindowEditor_H

#include "OgreBaseEditor.h"

namespace Ogre
{
	/**
	* \ingroup : OgreEditSystem
	*
	* \os&IDE  : Microsoft Windows XP (SP3)  &  Microsoft Visual C++ .NET 2008 & ogre1.8
	*
	* \VERSION : 1.0
	*
	* \@date   : 2012-03-11
	*
	* \Author  : lp
	*
	* \Desc    : 渲染窗口编辑
	*
	* \bug     : 
	*
	*/
	class OgreAppEdit_Export_API RenderWindowEditor : public BaseEditor
	{
	public:
		/**
		 *
		 * \param void 
		 * \return 
		 */
		RenderWindowEditor(RenderWindow* pRenderWindow);

		/**
		 *
		 * \param void 
		 * \return 
		 */
		virtual ~RenderWindowEditor(void);

		/** 获取渲染窗口
		 *
		 * \return 
		 */
		virtual RenderWindow*		getRenderWindow() const;
		
	protected:
		RenderWindow*				m_pWindow;	//* ogre render window pointer */
	};

	// 渲染窗口创建过程终必须的参数
	struct SRenderWindowCreateParams : public SBaseCreateParam
	{
	};

	/**
	* \ingroup : OgreEditSystem
	*
	* \os&IDE  : Microsoft Windows XP (SP3)  &  Microsoft Visual C++ .NET 2008 & ogre1.8
	*
	* \VERSION : 1.0
	*
	* \@date   : 2012-03-11
	*
	* \Author  : lp
	*
	* \Desc    : 渲染编辑工厂
	*
	* \bug     : 
	*
	*/
	class OgreAppEdit_Export_API RenderWindowEditorFactory : public BaseEditorFactory
	{
	public:
		/**
		 *
		 * \return 
		 */
		RenderWindowEditorFactory();

		/**
		 *
		 * \return 
		 */
		virtual ~RenderWindowEditorFactory();

		/**
		 *
		 * \param pm 
		 * \return 
		 */
		virtual BaseEditor*				create(const SBaseCreateParam* pm);
	};
}

#endif
