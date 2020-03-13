// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "translationTable.hxx"

// translationTable
// 

const translationTable::entry_sequence& translationTable::
entry () const
{
  return this->entry_;
}

translationTable::entry_sequence& translationTable::
entry ()
{
  return this->entry_;
}

void translationTable::
entry (const entry_sequence& s)
{
  this->entry_ = s;
}

const translationTable::language_type& translationTable::
language () const
{
  return this->language_.get ();
}

translationTable::language_type& translationTable::
language ()
{
  return this->language_.get ();
}

void translationTable::
language (const language_type& x)
{
  this->language_.set (x);
}

void translationTable::
language (::std::auto_ptr< language_type > x)
{
  this->language_.set (x);
}


// entry
// 

const entry::stringName_type& entry::
stringName () const
{
  return this->stringName_.get ();
}

entry::stringName_type& entry::
stringName ()
{
  return this->stringName_.get ();
}

void entry::
stringName (const stringName_type& x)
{
  this->stringName_.set (x);
}

void entry::
stringName (::std::auto_ptr< stringName_type > x)
{
  this->stringName_.set (x);
}

const entry::result_type& entry::
result () const
{
  return this->result_.get ();
}

entry::result_type& entry::
result ()
{
  return this->result_.get ();
}

void entry::
result (const result_type& x)
{
  this->result_.set (x);
}

void entry::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}


#include <xsd/cxx/xml/dom/parsing-source.hxx>

// translationTable
//

translationTable::
translationTable (const language_type& language)
: ::xml_schema::type (),
  entry_ (this),
  language_ (language, this)
{
}

translationTable::
translationTable (const translationTable& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  entry_ (x.entry_, f, this),
  language_ (x.language_, f, this)
{
}

translationTable::
translationTable (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  entry_ (this),
  language_ (this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
    this->parse (p, f);
  }
}

void translationTable::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_content (); p.next_content (false))
  {
    const ::xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // entry
    //
    if (n.name () == "entry" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< entry_type > r (
        entry_traits::create (i, f, this));

      this->entry_.push_back (r);
      continue;
    }

    break;
  }

  while (p.more_attributes ())
  {
    const ::xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "language" && n.namespace_ ().empty ())
    {
      this->language_.set (language_traits::create (i, f, this));
      continue;
    }
  }

  if (!language_.present ())
  {
    throw ::xsd::cxx::tree::expected_attribute< char > (
      "language",
      "");
  }
}

translationTable* translationTable::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class translationTable (*this, f, c);
}

translationTable& translationTable::
operator= (const translationTable& x)
{
  if (this != &x)
  {
    static_cast< ::xml_schema::type& > (*this) = x;
    this->entry_ = x.entry_;
    this->language_ = x.language_;
  }

  return *this;
}

translationTable::
~translationTable ()
{
}

// entry
//

entry::
entry (const stringName_type& stringName,
       const result_type& result)
: ::xml_schema::type (),
  stringName_ (stringName, this),
  result_ (result, this)
{
}

entry::
entry (const entry& x,
       ::xml_schema::flags f,
       ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  stringName_ (x.stringName_, f, this),
  result_ (x.result_, f, this)
{
}

entry::
entry (const ::xercesc::DOMElement& e,
       ::xml_schema::flags f,
       ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  stringName_ (this),
  result_ (this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, false, false, true);
    this->parse (p, f);
  }
}

void entry::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  while (p.more_attributes ())
  {
    const ::xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "stringName" && n.namespace_ ().empty ())
    {
      this->stringName_.set (stringName_traits::create (i, f, this));
      continue;
    }

    if (n.name () == "result" && n.namespace_ ().empty ())
    {
      this->result_.set (result_traits::create (i, f, this));
      continue;
    }
  }

  if (!stringName_.present ())
  {
    throw ::xsd::cxx::tree::expected_attribute< char > (
      "stringName",
      "");
  }

  if (!result_.present ())
  {
    throw ::xsd::cxx::tree::expected_attribute< char > (
      "result",
      "");
  }
}

entry* entry::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class entry (*this, f, c);
}

entry& entry::
operator= (const entry& x)
{
  if (this != &x)
  {
    static_cast< ::xml_schema::type& > (*this) = x;
    this->stringName_ = x.stringName_;
    this->result_ = x.result_;
  }

  return *this;
}

entry::
~entry ()
{
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

::std::auto_ptr< ::translationTable >
translationTable_ (const ::std::string& u,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::tree::error_handler< char > h;

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      u, h, p, f));

  h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

  return ::std::auto_ptr< ::translationTable > (
    ::translationTable_ (
      d, f | ::xml_schema::flags::own_dom, p));
}

::std::auto_ptr< ::translationTable >
translationTable_ (const ::std::string& u,
                   ::xml_schema::error_handler& h,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      u, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  return ::std::auto_ptr< ::translationTable > (
    ::translationTable_ (
      d, f | ::xml_schema::flags::own_dom, p));
}

::std::auto_ptr< ::translationTable >
translationTable_ (const ::std::string& u,
                   ::xercesc::DOMErrorHandler& h,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      u, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  return ::std::auto_ptr< ::translationTable > (
    ::translationTable_ (
      d, f | ::xml_schema::flags::own_dom, p));
}

::std::auto_ptr< ::translationTable >
translationTable_ (::std::istream& is,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::translationTable_ (isrc, f, p);
}

::std::auto_ptr< ::translationTable >
translationTable_ (::std::istream& is,
                   ::xml_schema::error_handler& h,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::translationTable_ (isrc, h, f, p);
}

::std::auto_ptr< ::translationTable >
translationTable_ (::std::istream& is,
                   ::xercesc::DOMErrorHandler& h,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::translationTable_ (isrc, h, f, p);
}

::std::auto_ptr< ::translationTable >
translationTable_ (::std::istream& is,
                   const ::std::string& sid,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::translationTable_ (isrc, f, p);
}

::std::auto_ptr< ::translationTable >
translationTable_ (::std::istream& is,
                   const ::std::string& sid,
                   ::xml_schema::error_handler& h,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::translationTable_ (isrc, h, f, p);
}

::std::auto_ptr< ::translationTable >
translationTable_ (::std::istream& is,
                   const ::std::string& sid,
                   ::xercesc::DOMErrorHandler& h,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::translationTable_ (isrc, h, f, p);
}

::std::auto_ptr< ::translationTable >
translationTable_ (::xercesc::InputSource& i,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xsd::cxx::tree::error_handler< char > h;

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      i, h, p, f));

  h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

  return ::std::auto_ptr< ::translationTable > (
    ::translationTable_ (
      d, f | ::xml_schema::flags::own_dom, p));
}

::std::auto_ptr< ::translationTable >
translationTable_ (::xercesc::InputSource& i,
                   ::xml_schema::error_handler& h,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      i, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  return ::std::auto_ptr< ::translationTable > (
    ::translationTable_ (
      d, f | ::xml_schema::flags::own_dom, p));
}

::std::auto_ptr< ::translationTable >
translationTable_ (::xercesc::InputSource& i,
                   ::xercesc::DOMErrorHandler& h,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      i, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  return ::std::auto_ptr< ::translationTable > (
    ::translationTable_ (
      d, f | ::xml_schema::flags::own_dom, p));
}

::std::auto_ptr< ::translationTable >
translationTable_ (const ::xercesc::DOMDocument& doc,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties& p)
{
  if (f & ::xml_schema::flags::keep_dom)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      static_cast< ::xercesc::DOMDocument* > (doc.cloneNode (true)));

    return ::std::auto_ptr< ::translationTable > (
      ::translationTable_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  const ::xercesc::DOMElement& e (*doc.getDocumentElement ());
  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (n.name () == "translationTable" &&
      n.namespace_ () == "")
  {
    ::std::auto_ptr< ::translationTable > r (
      ::xsd::cxx::tree::traits< ::translationTable, char >::create (
        e, f, 0));
    return r;
  }

  throw ::xsd::cxx::tree::unexpected_element < char > (
    n.name (),
    n.namespace_ (),
    "translationTable",
    "");
}

::std::auto_ptr< ::translationTable >
translationTable_ (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d,
                   ::xml_schema::flags f,
                   const ::xml_schema::properties&)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
    ((f & ::xml_schema::flags::keep_dom) &&
     !(f & ::xml_schema::flags::own_dom))
    ? static_cast< ::xercesc::DOMDocument* > (d->cloneNode (true))
    : 0);

  ::xercesc::DOMDocument& doc (c.get () ? *c : *d);
  const ::xercesc::DOMElement& e (*doc.getDocumentElement ());

  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (f & ::xml_schema::flags::keep_dom)
    doc.setUserData (::xml_schema::dom::tree_node_key,
                     (c.get () ? &c : &d),
                     0);

  if (n.name () == "translationTable" &&
      n.namespace_ () == "")
  {
    ::std::auto_ptr< ::translationTable > r (
      ::xsd::cxx::tree::traits< ::translationTable, char >::create (
        e, f, 0));
    return r;
  }

  throw ::xsd::cxx::tree::unexpected_element < char > (
    n.name (),
    n.namespace_ (),
    "translationTable",
    "");
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

void
translationTable_ (::std::ostream& o,
                   const ::translationTable& s,
                   const ::xml_schema::namespace_infomap& m,
                   const ::std::string& e,
                   ::xml_schema::flags f)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0);

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::translationTable_ (s, m, f));

  ::xsd::cxx::tree::error_handler< char > h;

  ::xsd::cxx::xml::dom::ostream_format_target t (o);
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
  }
}

void
translationTable_ (::std::ostream& o,
                   const ::translationTable& s,
                   ::xml_schema::error_handler& h,
                   const ::xml_schema::namespace_infomap& m,
                   const ::std::string& e,
                   ::xml_schema::flags f)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0);

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::translationTable_ (s, m, f));
  ::xsd::cxx::xml::dom::ostream_format_target t (o);
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    throw ::xsd::cxx::tree::serialization< char > ();
  }
}

void
translationTable_ (::std::ostream& o,
                   const ::translationTable& s,
                   ::xercesc::DOMErrorHandler& h,
                   const ::xml_schema::namespace_infomap& m,
                   const ::std::string& e,
                   ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::translationTable_ (s, m, f));
  ::xsd::cxx::xml::dom::ostream_format_target t (o);
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    throw ::xsd::cxx::tree::serialization< char > ();
  }
}

void
translationTable_ (::xercesc::XMLFormatTarget& t,
                   const ::translationTable& s,
                   const ::xml_schema::namespace_infomap& m,
                   const ::std::string& e,
                   ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::translationTable_ (s, m, f));

  ::xsd::cxx::tree::error_handler< char > h;

  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
  }
}

void
translationTable_ (::xercesc::XMLFormatTarget& t,
                   const ::translationTable& s,
                   ::xml_schema::error_handler& h,
                   const ::xml_schema::namespace_infomap& m,
                   const ::std::string& e,
                   ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::translationTable_ (s, m, f));
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    throw ::xsd::cxx::tree::serialization< char > ();
  }
}

void
translationTable_ (::xercesc::XMLFormatTarget& t,
                   const ::translationTable& s,
                   ::xercesc::DOMErrorHandler& h,
                   const ::xml_schema::namespace_infomap& m,
                   const ::std::string& e,
                   ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::translationTable_ (s, m, f));
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    throw ::xsd::cxx::tree::serialization< char > ();
  }
}

void
translationTable_ (::xercesc::DOMDocument& d,
                   const ::translationTable& s,
                   ::xml_schema::flags)
{
  ::xercesc::DOMElement& e (*d.getDocumentElement ());
  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (n.name () == "translationTable" &&
      n.namespace_ () == "")
  {
    e << s;
  }
  else
  {
    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "translationTable",
      "");
  }
}

::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >
translationTable_ (const ::translationTable& s,
                   const ::xml_schema::namespace_infomap& m,
                   ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::serialize< char > (
      "translationTable",
      "",
      m, f));

  ::translationTable_ (*d, s, f);
  return d;
}

void
operator<< (::xercesc::DOMElement& e, const translationTable& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // entry
  //
  for (translationTable::entry_const_iterator
       b (i.entry ().begin ()), n (i.entry ().end ());
       b != n; ++b)
  {
    ::xercesc::DOMElement& s (
      ::xsd::cxx::xml::dom::create_element (
        "entry",
        e));

    s << *b;
  }

  // language
  //
  {
    ::xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "language",
        e));

    a << i.language ();
  }
}

void
operator<< (::xercesc::DOMElement& e, const entry& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // stringName
  //
  {
    ::xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "stringName",
        e));

    a << i.stringName ();
  }

  // result
  //
  {
    ::xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "result",
        e));

    a << i.result ();
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

